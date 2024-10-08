#pragma once

class Global {
public:
  // global variable to keep used RC ports
  QList<int> usedRcPorts = QList<int>() << 1 << 2;

  // global count of lsl/lsd rclone proecesses
  int rcloneLsProcessCount = 0;

public:
  Global() = default;
  Global(const Global &) = delete;
  Global(Global &&) = delete;

  static Global &Instance() {
    static Global global;
    return global;
  }
};

namespace {
Global &global = Global::Instance();
}
