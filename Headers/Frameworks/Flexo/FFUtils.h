//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFUtils : NSObject
{
}

+ (void)debugLog:(id)arg1 format:(id)arg2;
+ (void)debugDisplayMessage:(id)arg1 subString:(id)arg2;
+ (id)flippedImageOfImage:(id)arg1;
+ (struct CGImage *)newCGImageRefFromImage:(id)arg1;
+ (struct CGColor *)newSelectionCGColor;
+ (id)selectionNSColor;
+ (BOOL)isYosemiteOrLater;
+ (BOOL)isSystemVersionOrLaterMajor:(int)arg1 minor:(int)arg2 bugFix:(int)arg3;
+ (void)systemVersionMajor:(int *)arg1 minor:(int *)arg2 bugFix:(int *)arg3;
+ (void)loadILMBPlugins;
+ (BOOL)areILMBPluginsLoaded;
+ (BOOL)isModuleInImportWindow:(id)arg1;

@end

