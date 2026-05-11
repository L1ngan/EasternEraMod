# `struct` `FWorldPlaceWeatherInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 天气信息

## Blueprint-exposed variables

### Property `Weather`

| Field | Details |
|------|------|
| C++ type | `EERWWeather` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EERWWeather Weather = EERWWeather::None;` |

**Source comments:**

> 天气

---

### Property `TemperatureMaxChange`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int TemperatureMaxChange = 0;` |

**Source comments:**

> 温度最大变化

---

### Property `TemperatureMinChange`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int TemperatureMinChange = 0;` |

**Source comments:**

> 温度最小变化

---

### Property `WeatherDuringBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WeatherDuringBuff;` |

**Source comments:**

> 天气过程中获得的buff (固定改为永久时长)

---

### Property `WeatherEndBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WeatherEndBuff;` |

**Source comments:**

> 天气结束后获得的buff（固定改为固定时长)

---

### Property `WeatherName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText WeatherName;` |

**Source comments:**

> 天气名称

---

### Property `MiniTime`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int MiniTime = 30;` |

**Source comments:**

> 持续时间（秒）最小值（现实时间）

---

### Property `MaxTime`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int MaxTime = 100;` |

**Source comments:**

> 持续时间（秒）最大值（现实时间）

---

### Property `bShowTip`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bShowTip = false;` |

**Source comments:**

> 是否显示天气提示

---

### Property `TipType`

| Field | Details |
|------|------|
| C++ type | `ETipsType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ETipsType TipType= ETipsType::WeatherChange;` |

**Source comments:**

> 提示类型

---

### Property `WeatherDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText WeatherDesc;` |

**Source comments:**

> 天气描述信息

---

### Property `WeatherData`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UPrimaryDataAsset>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UPrimaryDataAsset> WeatherData;` |

**Source comments:**

> 天气对应的数据文件的软引用

---

### Property `WeatherIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> WeatherIcon;` |

---

### Property `WeatherStartChangeEvent`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName WeatherStartChangeEvent;` |

**Source comments:**

> 天气开始时对音效的操作 读取SoundChangeEventConfig 配置表

---

### Property `WeatherEndChangeEvent`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName WeatherEndChangeEvent;` |

**Source comments:**

> 天气结束时对音效的操作 读取SoundChangeEventConfig 配置表

---

### Property `bEffectPlant`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bEffectPlant = false;` |

**Source comments:**

> 是否影响植物生长效果

---

### Property `PlantEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditCondition = "bEffectPlant")) float PlantEfficiency = 1.f;` |

**Source comments:**

> 天气对植物的生长效果（随机天气效果时不会生效，仅对指定天气时有效）

---

### Property `bEffectAnimalPregnant`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bEffectAnimalPregnant = false;` |

**Source comments:**

> 是否影响动物怀孕

---

### Property `PregnantEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditCondition = "bEffectAnimalPregnant")) float PregnantEfficiency = 1.f;` |

**Source comments:**

> 天气对动物怀孕时间的影响（随机天气效果时不会生效，仅对指定天气时有效）

---
