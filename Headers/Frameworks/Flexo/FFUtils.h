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
+ (void)drawFacet:(id)arg1 inFrame:(struct CGRect)arg2;
+ (id)facetForElement:(long long)arg1 part:(long long)arg2;
+ (void)drawFacetForElement:(long long)arg1 part:(long long)arg2 inFrame:(struct CGRect)arg3;
+ (struct CGSize)imageSizeForElement:(long long)arg1 part:(long long)arg2;
+ (id)flippedImageOfImage:(id)arg1;
+ (id)imageForThemeElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 state:(long long)arg5 value:(long long)arg6 variant:(long long)arg7 size:(unsigned long long)arg8;
+ (id)imageForElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4;
+ (id)imageForElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 value:(long long)arg4 size:(unsigned long long)arg5;
+ (id)imageForElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 value:(long long)arg4;
+ (id)imageForElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3;
+ (id)imageForElement:(long long)arg1 part:(long long)arg2 value:(long long)arg3;
+ (id)pressedImageForElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3;
+ (struct CGImage *)newCGImageRefFromImage:(id)arg1;
+ (struct CGColor *)newSelectionCGColor;
+ (id)selectionNSColor;
+ (void)loadILMBPlugins;
+ (BOOL)areILMBPluginsLoaded;
+ (BOOL)isModuleInImportWindow:(id)arg1;

@end
