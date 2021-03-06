//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FxPlug/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface FxRemotePath : NSObject <NSSecureCoding>
{
    BOOL open;
    BOOL inverted;
    void *pathID;
    NSString *name;
    unsigned long long style;
    double arcLength;
    unsigned long long numVertices;
    NSData *vertices;
    unsigned long long blendMode;
    struct FxPathGeometryInfo geometryInfo;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) struct FxPathGeometryInfo geometryInfo; // @synthesize geometryInfo;
@property(readonly) unsigned long long blendMode; // @synthesize blendMode;
@property(readonly) NSData *vertices; // @synthesize vertices;
@property(readonly) unsigned long long numVertices; // @synthesize numVertices;
@property(readonly) double arcLength; // @synthesize arcLength;
@property(readonly) unsigned long long style; // @synthesize style;
@property(readonly) BOOL inverted; // @synthesize inverted;
@property(readonly) BOOL open; // @synthesize open;
@property(readonly) NSString *name; // @synthesize name;
@property(readonly) void *pathID; // @synthesize pathID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPathID:(void *)arg1 name:(id)arg2 open:(BOOL)arg3 inverted:(BOOL)arg4 style:(unsigned long long)arg5 length:(double)arg6 numVertices:(unsigned long long)arg7 vertices:(struct FxVertex *)arg8 blendMode:(unsigned long long)arg9 geometryInfo:(struct FxPathGeometryInfo)arg10;
- (id)initWithPathID:(void *)arg1 name:(id)arg2;

@end

