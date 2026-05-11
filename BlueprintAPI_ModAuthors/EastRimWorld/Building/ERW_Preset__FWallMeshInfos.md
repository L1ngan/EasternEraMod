# `struct` `FWallMeshInfos`

**源码头文件：** `EastRimWorld/Building/ERW_Preset.h`

---

## 功能说明（来自头文件注释）

> 墙的模型信息

## 蓝图暴露变量

### 属性 `Infos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<UStaticMeshComponent* , [FWallMeshData](ERW_Preset__FWallMeshData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<UStaticMeshComponent* , FWallMeshData> Infos;` |

**源码注释：**

> TMap<墙的模型组件 , 墙的数据>

---
