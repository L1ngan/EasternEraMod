# `class` `UFarmlandConfigAsset`

**源码头文件：** `EastRimWorld/Struct/FarmlandStruct.h`

---

## 功能说明（来自头文件注释）

> 田地配置资产

## 蓝图暴露变量

### 属性 `PlantWidgetId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") FName PlantWidgetId;` |

**源码注释：**

> 农田种植物信息界面id

---

### 属性 `DecalMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInterface> DecalMaterial;` |

**源码注释：**

> 农田材质

---

### 属性 `PreviewMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInterface> PreviewMaterial;` |

**源码注释：**

> 预览农田材质(跟随鼠标的预览田)

---

### 属性 `ExpandMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInstance>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> ExpandMaterial;` |

**源码注释：**

> 扩大农田材质

---

### 属性 `ReduceMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInstance>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> ReduceMaterial;` |

**源码注释：**

> 缩减农田材质

---

### 属性 `EdgeMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInstance>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> EdgeMaterial;` |

**源码注释：**

> 农田边线材质

---

### 属性 `SelectedMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInstance>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInstance> SelectedMaterial;` |

**源码注释：**

> 选中农田材质

---

### 属性 `MaskGrassMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<UMaterialInterface> MaskGrassMaterial;` |

**源码注释：**

> 除草材质

---

### 属性 `MaskGrassVirtualTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<URuntimeVirtualTexture>` |
| 反射说明符 | BlueprintReadWrite, Category="Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Material") TSoftObjectPtr<URuntimeVirtualTexture> MaskGrassVirtualTexture;` |

---

### 属性 `InformationWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="UI") FName InformationWidget;` |

---

### 属性 `ChangePlantListUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UUserWidget>` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="UI") TSubclassOf<UUserWidget> ChangePlantListUI;` |

---

### 属性 `FarmlandMaterialParamName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="MaterialParam" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="MaterialParam") FName FarmlandMaterialParamName;` |

**源码注释：**

> 农田材质边缘淡化参数名称

---

### 属性 `FarmlandMaterialCornerParamName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="MaterialParam" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="MaterialParam") FName FarmlandMaterialCornerParamName;` |

**源码注释：**

> 农田材质内角淡化参数名称

---

### 属性 `MountMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Mount" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Mount") TSoftObjectPtr<UStaticMesh> MountMesh;` |

**源码注释：**

> 农田土包模型

---

### 属性 `MountOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Mount" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Mount") float MountOffset;` |

**源码注释：**

> 农田土包偏移

---

### 属性 `FarmlandActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AEastRimWorldFarmlandActor](../Farmland/EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AEastRimWorldFarmlandActor> FarmlandActorClass;` |

---

### 属性 `FarmlandMaxHeightDiff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float FarmlandMaxHeightDiff;` |

**源码注释：**

> 农田最大高差限制

---

### 属性 `LabelCylinderMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadWrite, Category="LabelCylinder" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="LabelCylinder") TSoftObjectPtr<UMaterialInterface> LabelCylinderMaterial;` |

**源码注释：**

> 四角标牌立柱材质

---

### 属性 `LabelCylinderMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="LabelCylinder" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="LabelCylinder") TSoftObjectPtr<UStaticMesh> LabelCylinderMesh;` |

**源码注释：**

> 四角标牌立柱模型

---

### 属性 `LabelCylinderSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="LabelCylinder" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="LabelCylinder") FVector LabelCylinderSize;` |

**源码注释：**

> 四角标牌立柱模型大小缩放

---

### 属性 `MaxPlantSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MaxPlantSize;` |

**源码注释：**

> 一次能拉出的农田大小限制

---

### 属性 `ClickSoundId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ClickSoundId;` |

**源码注释：**

> 农田点击音效id

---
