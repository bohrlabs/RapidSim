# Internal Repo, never publicate !!!

## RapidSim Suite
is a complete ecosystem for simulation, development, testing, and presentation. It is structured into four tightly integrated components, each tailored to a specific role and licensing model:

## RapidSim Engine
The high-performance runtime core of the suite. It executes projects with deterministic scheduling, optimized data pipelines, and AddOn integration through a stable API/ABI. The Engine also manages license verification. Depending on the active license, API access can be enabled or restricted. It can operate standalone, embedded into third-party applications, or as the foundation for Studio, Lab, and Show.

## RapidSim Studio
The flagship development environment. It provides powerful tools for building and configuring simulation projects through a node-based editor, AddOn manager, and scene designer. Studio is licensed for developers and includes the full Lab feature set. It is the most capable edition, allowing teams to create, configure, and validate complete projects before deployment.

## RapidSim Lab
The headless, scriptable testbench for automated testing and CI pipelines. Lab executes pre-configured projects produced by Studio in a deterministic, reproducible manner. It supports scripted replays, regression testing, and performance profiling. Lab requires a runtime license, available at lower cost, which covers execution but not project authoring or configuration.

## RapidSim Show
The universal presentation tool. Show can be freely distributed and used without a license. It loads existing projects in read-only mode, offering streamlined controls, polished visualization, and playback for demonstrations, customer presentations, or training scenarios.


---
Together these components form the RapidSim Suite. Development teams rely on Studio to author projects, Lab to validate and test them in CI pipelines, Engine to execute them with maximum performance, and Show to present the results to end users without licensing barriers.

---
### Folder Structure
```
RapidSim/
  CMakeLists.txt
  cmake/
  docs/
  scripts/
    leakcheck_allowlist.txt      # future export allowlist
  engine/                        # CLOSED
    api/                         # public C ABI headers (mirror to SDK later)
      rapidsim_engine.h
    include_internal/
    src/
    tests/
    packaging/                   # Conan/vcpkg + CMake config gen
  engine_stub/                   # OPEN, no-op but ABI-compatible
    rapidsim_engine_stub.c
  studio/                        # OPEN
  lab/                           # OPEN (headless)
  show/                          # OPEN (UI, no engine src)
  addons/                        # OPEN (samples, templates)
  .gitignore
  LICENSE.proprietary
  README.md
```