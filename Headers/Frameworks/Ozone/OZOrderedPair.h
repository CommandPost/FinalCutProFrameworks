//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/OZCompare-Protocol.h>

@protocol OZCompare><NSObject;

@interface OZOrderedPair : NSObject <OZCompare>
{
    id <OZCompare><NSObject> _pFirst;
    id <OZCompare><NSObject> _pSecond;
}

- (id)description;
- (long long)compare:(id)arg1;
- (id)second;
- (id)first;
- (void)dealloc;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

