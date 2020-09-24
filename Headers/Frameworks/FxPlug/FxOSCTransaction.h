//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FxPlug/FxParameterTransaction.h>

#import "NSSecureCoding.h"

@class FxMatrix44, NSCursor;

@interface FxOSCTransaction : FxParameterTransaction <NSSecureCoding>
{
    int oscTransactionType;
    unsigned long long fromSpace;
    unsigned long long toSpace;
    double pixelAspectRatio;
    double zoom;
    FxMatrix44 *transform;
    double backingScaleFactor;
    NSCursor *cursor;
    struct CGPoint point;
    struct CGRect bounds;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSCursor *cursor; // @synthesize cursor;
@property double backingScaleFactor; // @synthesize backingScaleFactor;
@property(retain) FxMatrix44 *transform; // @synthesize transform;
@property double zoom; // @synthesize zoom;
@property double pixelAspectRatio; // @synthesize pixelAspectRatio;
@property struct CGRect bounds; // @synthesize bounds;
@property struct CGPoint point; // @synthesize point;
@property unsigned long long toSpace; // @synthesize toSpace;
@property unsigned long long fromSpace; // @synthesize fromSpace;
@property int oscTransactionType; // @synthesize oscTransactionType;
- (id)description;
- (id)stringForSubTransactionType;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTransactionID:(unsigned long long)arg1 pluginUUID:(id)arg2 pluginSessionID:(unsigned long long)arg3;
- (id)init;

@end
