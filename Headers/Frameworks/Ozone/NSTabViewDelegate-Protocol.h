//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol NSTabViewDelegate <NSObject>

@optional
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
@end

