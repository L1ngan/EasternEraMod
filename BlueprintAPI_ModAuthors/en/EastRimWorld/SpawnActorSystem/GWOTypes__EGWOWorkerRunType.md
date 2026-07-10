# `enum` `EGWOWorkerRunType`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Spawn point working mode: use static points defined in the editor, or randomly shuffle spawn points and boxes for a dynamic world

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `USE_SPAWN_POINTS_FROM_EDITOR` | UseSpawnPointsFormEditor | 编辑器中定义的点在生成器的整个操作过程中保持静态 |
| `SHUFFLE_USE_FREE_POINTS` | ShuffleUseFreePoints | 生成点和生成箱体会随机变化。这非常适合创建动态世界。 |
