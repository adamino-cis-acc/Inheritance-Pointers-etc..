#pragma once

class Lock {
private:
    bool unlocked;
protected:
    Lock();
    bool unlock();
public:
    bool isUnlocked() const;
};
