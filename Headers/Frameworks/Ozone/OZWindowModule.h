//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKWindowModule.h"

#import "NSWindowDelegate.h"

@interface OZWindowModule : LKWindowModule <NSWindowDelegate>
{
}

+ (Class)windowControllerClass;
+ (Class)windowClass;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;
- (id)windowTitle;

@end

