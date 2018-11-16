//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

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

struct PCMatrix44Tmpl<double> {
    double _field1[4][4];
};

struct PC_CMTimePair {
    CDStruct_1b6d18a9 first;
    CDStruct_1b6d18a9 second;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1[16];
} CDStruct_60067b7e;

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
typedef struct PCMatrix44Tmpl<double> {
    double _field1[4][4];
} PCMatrix44Tmpl_93ed1289;

