# `enum` `EBuildUnavailableReason`

**Source header:** `EastRimWorld/Mod/ModBuildLibrary.h`

---

## Functional description (from header comments)

> 建筑或子类不可用的原因(只追加, 不重排)

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | 可用 |
| `ConfigMissing` |  | 建筑配置(BuildConfig)或子类配置(BuildTabConfig)里没有这一行 |
| `NoMenuConfig` |  | 建造菜单配置(BuildingUI)里没有这一行, 或它指向的子类不存在 |
| `NotUnlocked` |  | 还没解锁 |
| `NoUnlockedBuildingInTab` |  | 子类下没有已解锁的建筑(子类按钮不会出现) |
| `UpperStoreyClosed` |  | 通往上层的楼梯, 二楼还没开放(建造菜单不显示) |
