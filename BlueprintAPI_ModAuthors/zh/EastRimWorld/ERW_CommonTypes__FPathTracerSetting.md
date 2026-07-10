# `struct` `FPathTracerSetting`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 样条线配置数据

## 蓝图暴露变量

### 属性 `CornerSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Corners" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Corners") float CornerSize = 0.f;` |

**说明:**

> 路径拐角的尺寸。

---

### 属性 `TangentsLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Corners" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Corners") float TangentsLength = 0.f;` |

**说明:**

> 样条线切线的长度。

---

### 属性 `DistanceBetweenDots`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dots" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float DistanceBetweenDots = 0.f;` |

**说明:**

> 路径上相邻点之间的间距。

---

### 属性 `DotsRotation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dots" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float DotsRotation = 0.f;` |

**说明:**

> 路径点的旋转角度。

---

### 属性 `DotsScaleVertical`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dots" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float DotsScaleVertical = 0.f;` |

**说明:**

> 路径点的垂直方向缩放。

---

### 属性 `CornerDotsScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dots" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dots") float CornerDotsScale = 0.f;` |

**说明:**

> 拐角处点的缩放系数。

---

### 属性 `DashedLine`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") bool DashedLine = false;` |

**说明:**

> 是否以虚线方式显示路径。

---

### 属性 `DashedLineFrequency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") float DashedLineFrequency = 0.f;` |

**说明:**

> 虚线段的频率（疏密程度）。

---

### 属性 `DashedLineGapSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") float DashedLineGapSize = 0.f;` |

**说明:**

> 虚线段之间的间隙大小。

---

### 属性 `DashedLineAnimSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Dashed Line" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Dashed Line") float DashedLineAnimSpeed = 0.f;` |

**说明:**

> 虚线流动动画的速度。

---

### 属性 `MainMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Mesh") TSoftObjectPtr<UStaticMesh> MainMesh;` |

**说明:**

> 路径主体的静态网格模型（软引用）。

---

### 属性 `AdditionalMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main|Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main|Mesh") TSoftObjectPtr<UStaticMesh> AdditionalMesh;` |

**说明:**

> 路径附加的静态网格模型（软引用）。

---

### 属性 `ManualEditMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ManualEditMode = false;` |

**说明:**

> 是否启用手动编辑模式。

---

### 属性 `ExactFollowingSplineMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ExactFollowingSplineMode = false;` |

**说明:**

> 是否启用精确跟随样条线模式。

---

### 属性 `ClosedLoop`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ClosedLoop = false;` |

**说明:**

> 路径是否闭合成环。

---

### 属性 `PathType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPathTracerType](ERW_Enumerations__EPathTracerType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") EPathTracerType PathType = EPathTracerType::Default;` |

**说明:**

> 路径类型（EPathTracerType）。

---

### 属性 `PathScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") FVector2D PathScale = FVector2D::ZeroVector;` |

**说明:**

> 路径的二维缩放。

---

### 属性 `GroundOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") float GroundOffset = 0.f;` |

**说明:**

> 路径相对地面的高度偏移。

---

### 属性 `LimitPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool LimitPath = false;` |

**说明:**

> 是否限制路径长度。

---

### 属性 `PathLimitLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") float PathLimitLength = 0.f;` |

**说明:**

> 路径长度上限（启用限制时生效）。

---

### 属性 `CenterOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") FVector CenterOffset = FVector::ZeroVector;` |

**说明:**

> 路径中心的偏移向量。

---

### 属性 `ExpandedPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ExpandedPath = false;` |

**说明:**

> 是否扩展路径。

---

### 属性 `ExpandValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") float ExpandValue = 0.f;` |

**说明:**

> 路径的扩展量。

---

### 属性 `ExpandDirection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Main" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Main") bool ExpandDirection = false;` |

**说明:**

> 路径扩展的方向开关。

---

### 属性 `PathColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") FLinearColor PathColor = FLinearColor::White;` |

**说明:**

> 路径的显示颜色。

---

### 属性 `PathOpacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") float PathOpacity = 1.f;` |

**说明:**

> 路径的不透明度（0-1）。

---

### 属性 `SetPathColorForMarks`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool SetPathColorForMarks = false;` |

**说明:**

> 是否将路径颜色同时应用到起止标记。

---

### 属性 `TranslucentStartAndEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool TranslucentStartAndEnd = false;` |

**说明:**

> 路径起点和终点是否使用半透明渐变。

---

### 属性 `VisibleThroughObjects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool VisibleThroughObjects = false;` |

**说明:**

> 路径是否透过遮挡物可见。

---

### 属性 `ShadedVisibleThroughObjects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool ShadedVisibleThroughObjects = false;` |

**说明:**

> 透过遮挡物可见时是否使用带明暗的显示方式。

---

### 属性 `EnableTranslucent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool EnableTranslucent = false;` |

**说明:**

> 是否启用半透明效果。

---

### 属性 `TranslucentStartSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") float TranslucentStartSize = 0.f;` |

**说明:**

> 起点处半透明渐变区域的大小。

---

### 属性 `TranslucentEndSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") float TranslucentEndSize = 0.f;` |

**说明:**

> 终点处半透明渐变区域的大小。

---

### 属性 `VisibleThroughObjectsShaderType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") int32 VisibleThroughObjectsShaderType = 0;` |

**说明:**

> 透过遮挡物显示时使用的着色器类型索引。

---

### 属性 `EnableCustomMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") bool EnableCustomMaterial = false;` |

**说明:**

> 是否启用自定义材质。

---

### 属性 `CustomMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UMaterialInterface*` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Material" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Material") UMaterialInterface* CustomMaterial = nullptr;` |

**说明:**

> 路径使用的自定义材质。

---

### 属性 `PathMarkStartClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") TSoftClassPtr<AActor> PathMarkStartClass;` |

**说明:**

> 路径起点标记的Actor类（软引用）。

---

### 属性 `PathMarkEndClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") TSoftClassPtr<AActor> PathMarkEndClass;` |

**说明:**

> 路径终点标记的Actor类（软引用）。

---

### 属性 `StartMarkRotation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float StartMarkRotation = 0.f;` |

**说明:**

> 起点标记的旋转角度。

---

### 属性 `EndMarkRotation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float EndMarkRotation = 0.f;` |

**说明:**

> 终点标记的旋转角度。

---

### 属性 `StartMarkScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float StartMarkScale = 0.f;` |

**说明:**

> 起点标记的缩放系数。

---

### 属性 `EndMarkScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float EndMarkScale = 0.f;` |

**说明:**

> 终点标记的缩放系数。

---

### 属性 `StartMarkFollowDirection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") bool StartMarkFollowDirection = false;` |

**说明:**

> 起点标记是否跟随路径方向。

---

### 属性 `EndMarkFollowDirection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") bool EndMarkFollowDirection = false;` |

**说明:**

> 终点标记是否跟随路径方向。

---

### 属性 `StartPathIndent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float StartPathIndent = 0.f;` |

**说明:**

> 路径起点处的缩进距离。

---

### 属性 `EndPathIndent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Settings|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite,Category="Settings|Markers") float EndPathIndent = 0.f;` |

**说明:**

> 路径终点处的缩进距离。

---
