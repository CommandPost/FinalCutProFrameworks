//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QCUtils : NSObject
{
}

+ (struct CGPoint)pointFromQCPoint:(struct CGPoint)arg1 inViewBounds:(struct CGRect)arg2;
+ (BOOL)setValue:(id)arg1 forInputKey:(id)arg2 inPatch:(id)arg3;
+ (id)valueForInputKey:(id)arg1 inPatch:(id)arg2;
+ (BOOL)setFloat:(float)arg1 forInputKey:(id)arg2 inPatch:(id)arg3;
+ (BOOL)setBool:(BOOL)arg1 forInputKey:(id)arg2 inPatch:(id)arg3;
+ (id)rootPatchFromCompositionWithName:(id)arg1;

@end

