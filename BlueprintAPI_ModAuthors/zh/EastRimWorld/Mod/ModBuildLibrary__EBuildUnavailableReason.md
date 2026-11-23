# `enum` `EBuildUnavailableReason`

**源码头文件:** `EastRimWorld/Mod/ModBuildLibrary.h`

---

## 功能说明（来自头文件注释）

> 建筑或子类不可用的原因(只追加, 不重排)

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 可用 |
| `ConfigMissing` |  | 建筑配置(BuildConfig)或子类配置(BuildTabConfig)里没有这一行 |
| `NoMenuConfig` |  | 建造菜单配置(BuildingUI)里没有这一行, 或它指向的子类不存在 |
| `NotUnlocked` |  | 还没解锁 |
| `NoUnlockedBuildingInTab` |  | 子类下没有已解锁的建筑(子类按钮不会出现) |
| `UpperStoreyClosed` |  | 通往上层的楼梯, 二楼还没开放(建造菜单不显示) |
| `NotInVariantFamily` |  | 规格不属于该建筑, 或是配置无效的规格行(建筑配置 VariantOf 填了但不满足规格行要求) |
