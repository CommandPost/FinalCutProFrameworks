//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/NSValidatedUserInterfaceItem-Protocol.h>

@interface DummyInterfaceItem : NSObject <NSValidatedUserInterfaceItem>
{
    SEL _action;
    int _tag;
}

@property(readonly) long long tag;
@property(readonly) SEL action;
- (id)initWithAction:(SEL)arg1 andTag:(int)arg2;

@end

