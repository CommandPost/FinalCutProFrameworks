//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/AutoEncodeDecodeObject.h>

__attribute__((visibility("hidden")))
@interface Vector3 : AutoEncodeDecodeObject
{
    float m_X;
    float m_Y;
    float m_Z;
}

+ (id)vectorWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
@property(nonatomic) float Z; // @synthesize Z=m_Z;
@property(nonatomic) float Y; // @synthesize Y=m_Y;
@property(nonatomic) float X; // @synthesize X=m_X;
- (id)keysToSetToNil;
- (id)keysToEncode;

@end

