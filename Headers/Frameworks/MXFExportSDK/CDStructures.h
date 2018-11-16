//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct GZIOBase {
    CDUnknownFunctionPointerType *_field1;
};

struct GZMemory {
    _Bool _field1;
    long long _field2;
    char *_field3;
};

struct MMTrack;

struct MXArray {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    char *_field3;
    long long _field4;
    struct vector<MXF::MXObject *, std::__1::allocator<MXF::MXObject *>> _field5;
    unsigned int _field6;
};

struct MXGroup {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    char *_field3;
    long long _field4;
    struct vector<MXF::MXObject *, std::__1::allocator<MXF::MXObject *>> _field5;
};

struct MXKLV;

struct MXKey {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    char *_field3;
    long long _field4;
};

struct MXKey16 {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    char *_field3;
    long long _field4;
    unsigned long long _field5[2];
};

struct MXMetadata;

struct MXMovieDesc {
    int _field1;
    int _field2;
    struct MXPrimerPack *_field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
    unsigned short *_field7;
    struct MXKey _field8;
    struct MXKey _field9;
    unsigned int _field10;
    struct MXKey16 _field11;
    unsigned long long *_field12;
    unsigned long long *_field13;
    unsigned long long *_field14;
    unsigned long long _field15;
    unsigned long long _field16;
    struct MXKey16 _field17;
    unsigned int _field18;
    struct vector<MXF::MMTrack *, std::__1::allocator<MXF::MMTrack *>> _field19;
    struct map<MEMetadataKey, MXF::MXObject *, std::__1::less<MEMetadataKey>, std::__1::allocator<std::__1::pair<const MEMetadataKey, MXF::MXObject *>>> _field20;
    struct MXGroup _field21;
    struct MXKLV *_field22;
    struct MXPartitionHeader *_field23;
};

struct MXObject;

struct MXPartitionHeader {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    char *_field3;
    long long _field4;
    int _field5;
    unsigned char _field6[16];
    _Bool _field7;
    unsigned char _field8[16];
    struct MXPrimerPack *_field9;
    struct MXKLV *_field10;
    struct MXMetadata *_field11;
    struct MXGroup _field12;
};

struct MXPrimerPack;

struct TimeStamp {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    char *_field3;
    long long _field4;
};

struct __list_node_base<FrameEntry, void *> {
    struct __list_node_base<FrameEntry, void *> *__prev_;
    struct __list_node_base<FrameEntry, void *> *__next_;
};

struct __list_node_base<RIPEntry, void *> {
    struct __list_node_base<RIPEntry, void *> *__prev_;
    struct __list_node_base<RIPEntry, void *> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct list<FrameEntry, std::__1::allocator<FrameEntry>> {
    struct __list_node_base<FrameEntry, void *> __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<FrameEntry, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
};

struct list<RIPEntry, std::__1::allocator<RIPEntry>> {
    struct __list_node_base<RIPEntry, void *> __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<RIPEntry, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
};

struct map<MEMetadataKey, MXF::MXObject *, std::__1::less<MEMetadataKey>, std::__1::allocator<std::__1::pair<const MEMetadataKey, MXF::MXObject *>>> {
    struct __tree<std::__1::__value_type<MEMetadataKey, MXF::MXObject *>, std::__1::__map_value_compare<MEMetadataKey, std::__1::__value_type<MEMetadataKey, MXF::MXObject *>, std::__1::less<MEMetadataKey>, true>, std::__1::allocator<std::__1::__value_type<MEMetadataKey, MXF::MXObject *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MEMetadataKey, MXF::MXObject *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<MEMetadataKey, std::__1::__value_type<MEMetadataKey, MXF::MXObject *>, std::__1::less<MEMetadataKey>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vector<MXF::MMTrack *, std::__1::allocator<MXF::MMTrack *>> {
    struct MMTrack **_field1;
    struct MMTrack **_field2;
    struct __compressed_pair<MXF::MMTrack **, std::__1::allocator<MXF::MMTrack *>> {
        struct MMTrack **_field1;
    } _field3;
};

struct vector<MXF::MXObject *, std::__1::allocator<MXF::MXObject *>> {
    struct MXObject **_field1;
    struct MXObject **_field2;
    struct __compressed_pair<MXF::MXObject **, std::__1::allocator<MXF::MXObject *>> {
        struct MXObject **_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    char _field1;
    char _field2;
    unsigned char _field3;
    char _field4;
    char _field5;
    char _field6;
    char _field7;
} CDStruct_1b7e618c;
