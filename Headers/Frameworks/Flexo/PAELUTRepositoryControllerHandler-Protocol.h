//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, PAELUTRepositoryController, PAELUTRepositoryItem;

@protocol PAELUTRepositoryControllerHandler <NSObject>

@optional
- (BOOL)controller:(PAELUTRepositoryController *)arg1 ownsMenu:(NSMenu *)arg2 selectedItem:(id *)arg3;
- (void)controller:(PAELUTRepositoryController *)arg1 menu:(NSMenu *)arg2 sender:(id)arg3 didSelectItem:(PAELUTRepositoryItem *)arg4;
@end
