# `enum` `EGWOCheckFilter`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Spawn point validity check mode (horizontal / check floor / check floor plus NavMesh)

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `HORIZONTAL` | Horizontal | Horizontal: take points on the horizontal plane without floor/NavMesh checks |
| `CHECK_FLOOR` | Check Floor | Check Floor: spawn point must pass a floor trace check |
| `CHECK_FLOOR_NAV` | Check Floor + NavMesh | Check floor and additionally require the point to be on the NavMesh |
