# Mod 数据表与骨骼网格字段说明

---

## 1. 配置如何进游戏

1. 在 `Content/Mods/<ModName>/` 下维护 **DataTable**（及网格、动画等 `.uasset`）。  
2. 在 **`UModInformationAsset`** 里为每一类配置添加一条 **`FModConfig`**：`ModConfigType` 选择对应 `EModConfigType`，`DataTable` 指向你的表。  
3. 表中 **行结构体** 必须与该类型一致（例如 `AnimalConfig` 使用 `FModAnimalData` 这类定义在插件里的结构）。

下列字段均来自 `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/` 下头文件；若代码有更新，以头文件为准。

---

## 2. 动物 / 怪物配置（`FModAnimalData`）

**头文件**：`CharacterDataStruct.h`  
**典型配置类型**：`EModConfigType::AnimalConfig`（以你工程内实际枚举为准）

动物与怪物通常使用 **独立骨架** 或工程内既有动物骨架；所有引用到动画的资源必须与 **`AnimalMesh` 的 Skeleton** 一致。

| 字段 | 类型（概念） | 说明与骨架关系 |
|------|----------------|----------------|
| `AnimalMesh` | 软对象路径 → `SkeletalMesh` | **核心网格**。决定本角色使用的 `USkeleton`。后续所有动画资源必须与此 Skeleton 兼容。 |
| `AnimGroup` | `int32` | **动画分组**。代码注释：用于「不同骨骼的角色用不同的动画」。新物种若使用**新骨架**，必须与策划/程序约定占用的分组号，避免与其它动物共用同一分组却骨架不同导致动画蓝图取错资源。 |
| `AnimalBlendSpace` | 软对象路径 → `BlendSpace1D` | 移动等混合空间；绑定在某一 Skeleton 上，必须与 `AnimalMesh` 一致。 |
| `DeathAnimMontage` | 软对象路径 → `AnimMontage` | 死亡蒙太奇；须匹配 Skeleton。 |
| `HitAnimMontage` | 映射 → `AnimMontage` | 受击蒙太奇；须匹配 Skeleton。 |
| `MeshScale` | `FVector` | 仅缩放显示网格，**不改变**骨架层级与动画语义。 |
| `MeshLocationOffset` | `FVector` | 相对偏移，同样不改变绑定骨架。 |

**填表自检**：在编辑器中打开 `AnimalMesh`，记下 **Skeleton**；逐个打开 BlendSpace / Montage，确认它们针对的是同一 Skeleton（或为该 Skeleton 重定向后的产物）。

---

## 3. 建筑 / 设施配置（`FModBuildData`）

**头文件**：`BuildDataStruct.h`  
**典型配置类型**：`EModConfigType::BuildConfig`

用于带 **可动骨骼展示** 的设施（如机关、交互装置）。

| 字段 | 说明与骨架关系 |
|------|----------------|
| `bUseSkeletalMesh` | 为 `true` 时启用下方骨骼网格与动画实例。 |
| `SkeletalMesh` | 设施用的 `USkeletalMesh`；其 **Skeleton** 决定可用动画。 |
| `AnimInstance` | 运行时 **动画实例类**（`TSubclassOf<UAnimInstance>`）。必须与 **该 Mesh 的 Skeleton** 使用的动画蓝图体系兼容（通常为针对该 Skeleton 的 AnimBP 子类）。 |

若 `AnimInstance` 面向 Skeleton A，而 `SkeletalMesh` 指向 Skeleton B，会出现不播放动画或崩溃。

---

## 4. 人类 / 主角相关（`FModHumanData`）

**头文件**：`CharacterDataStruct.h`  
**典型配置类型**：`EModConfigType::CharacterConfig`（以工程为准）

该结构含捏人、立绘、武器防具、各类蒙太奇引用等；**未必每一项都是网格路径**。

**与主角身体网格相关的硬性约定**（与数据表字段并存）：凡在游戏中作为 **主角可用的人类身体** 替换或扩展的 **`USkeletalMesh`**，必须使用与参考网格相同的骨架：

- 参考：`Content/Art/Animations/Characters/Mannequins/Meshes/SK_Mannequin.uasset` 所绑定的 **`USkeleton`**。

具体导入流程见 [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md)。填表时若引用自定义人类网格资产，在内容浏览器中打开该网格，**核对 Skeleton 与 Mannequin 一致**。

---

## 5. 跨结构通用原则（填表必看）

1. **一条配置行内的网格与动画必须自成闭环**：同一 Skeleton，或与官方约定允许的重定向链一致。  
2. **`AnimGroup` 仅对动物等多骨架体系典型**：用于区分动画管线；数值需与项目既有约定对齐，不可随意填写。  
3. **软引用路径**：打包前确保引用资产位于 **本 Mod 目录** 或 Cook 能收集到的路径，避免丢失引用。  
4. **设施与人类主角不要混用 Skeleton**：设施 `AnimInstance` 与人类主角 AnimBP 通常针对不同骨架。

---

## 6. 相关文档与源码

- [Mod文档索引.md](./Mod文档索引.md)  
- [模型导入与骨骼匹配说明.md](./模型导入与骨骼匹配说明.md)  
- `CharacterDataStruct.h`、`BuildDataStruct.h`、`BaseDataStruct.h`
