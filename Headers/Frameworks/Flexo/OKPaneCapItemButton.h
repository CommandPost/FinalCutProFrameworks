//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/OKPaneCapItemSegmented.h>

__attribute__((visibility("hidden")))
@interface OKPaneCapItemButton : OKPaneCapItemSegmented
{
    id _target;
    SEL _action;
    BOOL _selected;
}

- (void)setOwner:(id)arg1;
- (void)setSegmentedControl:(id)arg1 segmentIndex:(unsigned long long)arg2;
@property BOOL selected;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;

@end
