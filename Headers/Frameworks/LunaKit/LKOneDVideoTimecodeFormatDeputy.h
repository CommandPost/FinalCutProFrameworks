//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKOneDFramesTimecodeFormatDeputy.h>

#import <LunaKit/NSCoding-Protocol.h>
#import <LunaKit/NSCopying-Protocol.h>
#import <LunaKit/NSSecureCoding-Protocol.h>

@interface LKOneDVideoTimecodeFormatDeputy : LKOneDFramesTimecodeFormatDeputy <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (long long)version;
+ (id)subtractFramesInvocation;
+ (id)addFramesInvocation;
+ (id)setFramesInvocation;
+ (id)framesInvocation;
+ (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredProtocol;

@end

