//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CPSDAdjustmentLayerInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct CPSDChannelBlendingInfo;

struct CPSDChannelLengthInfo;

struct CPSDColorModeData {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    char *_field4;
};

struct CPSDFile {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    char *_field3;
    unsigned int _field4;
    unsigned char _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    char *_field11;
    struct CPSDChannelLengthInfo *_field12;
    char **_field13;
    void *_field14;
    unsigned char _field15;
    struct CPSDHeader _field16;
    struct CPSDColorModeData _field17;
    struct CPSDImageResources _field18;
    struct CPSDMiscellaneousInfo _field19;
};

struct CPSDGlobalLayerMaskInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned short _field4;
    unsigned short _field5[4];
    unsigned short _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct CPSDGradientFillInfo;

struct CPSDHeader {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    char _field3[4];
    unsigned short _field4;
    unsigned char _field5[6];
    unsigned short _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned short _field9;
    unsigned short _field10;
};

struct CPSDImageResourceBlock;

struct CPSDImageResources {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    struct CPSDImageResourceBlock *_field4;
};

struct CPSDLayerAndMaskInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned short _field4;
    struct CPSDLayerRecord *_field5;
    struct CPSDLayerChannelGroup **_field6;
};

struct CPSDLayerBlendingRanges {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct CPSDChannelBlendingInfo *_field6;
};

struct CPSDLayerChannelGroup;

struct CPSDLayerMaskData {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned short _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned char _field15;
    unsigned char _field16;
};

struct CPSDLayerRecord {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned short _field7;
    struct CPSDChannelLengthInfo *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned int _field15;
    struct CPSDLayerMaskData _field16;
    struct CPSDLayerBlendingRanges _field17;
    char _field18[256];
    struct CPSDVectorMaskData *_field19;
    struct CPSDObjectEffectsLayerInfo *_field20;
    struct CPSDGradientFillInfo *_field21;
    struct CPSDUnicodeLayerName *_field22;
    unsigned char _field23;
    struct CPSDAdjustmentLayerInfo _field24;
    unsigned char _field25;
    unsigned int _field26;
};

struct CPSDMiscellaneousInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    struct CPSDLayerAndMaskInfo _field4;
    struct CPSDGlobalLayerMaskInfo _field5;
};

struct CPSDObjectEffectsLayerInfo;

struct CPSDUnicodeLayerName;

struct CPSDVectorMaskData;

struct _HMSFs {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
};

struct _LKPSDImageInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    int _field6;
};

struct _LKSSCFlags {
    unsigned int style:4;
    unsigned int scalesTextToFit:1;
    unsigned int drawsBackground:1;
    unsigned int autorepeat:1;
    unsigned int isRomanOnly:1;
    unsigned int hasCustomBackgroundColor:1;
    unsigned int hasCustomTextColor:1;
    unsigned int hasCustomNonScrubbingTextColor:1;
    unsigned int hasCustomRolloverBackgroundColor:1;
    unsigned int editingSegment:1;
    unsigned int hasRollover:1;
    unsigned int hasSelection:1;
    unsigned int isScrubbing:1;
    unsigned int acceptsFirstResponderDuringEdit:1;
    unsigned int tintIndex:3;
    unsigned int hasFocus:1;
    unsigned int isSegmentFocus:1;
    unsigned int isInHighlightedRow:1;
    unsigned int needsSelectedTextColorForEditing:1;
    unsigned int hitSegment:1;
    unsigned int cursorHiddenForTextEditing:1;
    unsigned int targetNotified:1;
    unsigned int actionType:2;
    unsigned int isLayoutValid:1;
    unsigned int valueChangeWhenScrubbing:2;
    unsigned int useInitialValueAsPlaceholder:1;
    unsigned int hasNilValue:1;
    unsigned int hasLeftRollover:1;
    unsigned int hasRightRollover:1;
    unsigned int performingLayout:1;
    unsigned int reserved:27;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _proPSDGradientColor {
    double red;
    double green;
    double blue;
    double alpha;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    char _field5;
    double _field6;
    char _field7;
    char _field8;
} CDStruct_d212b10b;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    struct CGSize _field1;
    struct CGSize _field2;
    struct CGSize _field3;
} CDStruct_1ba92a5e;

