# `enum` `EGWOShuffleType`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> How the spawner handles spawned/frozen actors when reshuffling spawn points

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `RESET` | Reset | 生成器将完全更新其数据，并销毁所有已生成和冻结的演员。 |
| `SAVE` | Save | 生成器会再次生成所有生成点，但会保留已生成演员的所有信息，这将为新演员的生成带来更多动态性，但不会销毁旧演员，也不会生成超过生成列表中指定的数量。 |
| `SAVE_AND_DESTROY_FROZEN` | Save and Destroy Frozen Actor | 生成器生成新点，并删除所有冻结的演员。 |
