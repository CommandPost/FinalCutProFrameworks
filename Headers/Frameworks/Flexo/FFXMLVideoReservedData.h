//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FFXMLVideoReservedData : NSObject <NSCoding>
{
    int _rotationAngle;
    NSDictionary *_HETrimValues;
}

@property(retain, nonatomic) NSDictionary *HETrimValues; // @synthesize HETrimValues=_HETrimValues;
@property(nonatomic) int rotationAngle; // @synthesize rotationAngle=_rotationAngle;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

