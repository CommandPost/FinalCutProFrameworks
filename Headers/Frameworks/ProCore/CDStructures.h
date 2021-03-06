//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE, NSObject;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct HMD {
    struct IVRSystem *_field1;
    struct IVRCompositor *_field2;
    struct TrackedDevicePose_t _field3[16];
    struct Texture_t _field4[2];
    PCMatrix44Tmpl_93ed1289 _field5[2];
    float _field6[2];
    float _field7[2];
    float _field8[2];
    float _field9[2];
    PCMatrix44Tmpl_93ed1289 _field10[2];
    unsigned int _field11;
    unsigned int _field12;
};

struct HMDMatrices {
    struct PCVector3<double> _field1;
    struct PCQuat<double> _field2;
    PCMatrix44Tmpl_93ed1289 _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
};

struct HmdMatrix34_t {
    float _field1[3][4];
};

struct HmdVector3_t {
    float _field1[3];
};

struct IVRCompositor;

struct IVRSystem;

struct NSEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct PCHMDStats {
    _Bool statsValid;
    CDStruct_1b6d18a9 statsTaken;
    unsigned int dropsSinceLastReport;
    unsigned int reprojectionsSinceLastReport;
    unsigned int totalDrops;
    unsigned int totalReprojections;
};

struct PCMatrix44Parameters<double> {
    struct PCVector3<double> _field1;
    struct PCVector3<double> _field2;
    int _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
};

struct PCMatrix44Tmpl<double> {
    double _field1[4][4];
};

struct PCMutex {
    CDUnknownFunctionPointerType *_vptr$PCMutex;
    struct _opaque_pthread_mutex_t _Mutex;
};

struct PCProcrastinatedDispatch_t {
    struct os_unfair_lock_s lock;
    double executionTime;
    double executionTimeLimit;
    NSObject *queue;
    CDUnknownBlockType block;
    CDUnknownFunctionPointerType work;
    void *workContext;
    struct PCProcrastinatedDispatch_t **executionContext;
};

struct PCQuat<double> {
    double _scalar;
    struct PCVector3<double> _vector;
};

struct PCRect<int> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct PCSemaphore {
    long long _field1;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field2;
    struct _opaque_pthread_mutex_t _field3;
};

struct PCTimer {
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> _startTime;
    struct duration<long long, std::__1::ratio<1, 1000000000>> _accumTime;
    _Bool _started;
    _Bool _paused;
    int _numTimings;
    double _accumSeconds;
};

struct PCVector3<double> {
    double _x;
    double _y;
    double _z;
};

struct PC_CMTimePair {
    CDStruct_1b6d18a9 first;
    CDStruct_1b6d18a9 second;
};

struct Texture_t {
    void *_field1;
    int _field2;
    int _field3;
};

struct TrackedDevicePose_t {
    struct HmdMatrix34_t _field1;
    struct HmdVector3_t _field2;
    struct HmdVector3_t _field3;
    int _field4;
    _Bool _field5;
    _Bool _field6;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> {
        _Atomic int __a_value;
    } __a_;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long __rep_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> __d_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *_field1[4];
} CDStruct_f1db2b5e;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
} CDStruct_a6477b43;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Template types
typedef struct PCMatrix44Parameters<double> {
    struct PCVector3<double> _field1;
    struct PCVector3<double> _field2;
    int _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
} PCMatrix44Parameters_e1f7bfe2;

typedef struct PCMatrix44Tmpl<double> {
    double _field1[4][4];
} PCMatrix44Tmpl_93ed1289;

typedef struct PCRect<int> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} PCRect_54d5786f;

