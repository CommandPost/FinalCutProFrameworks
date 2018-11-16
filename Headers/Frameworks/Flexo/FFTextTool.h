//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFTool.h>

@interface FFTextTool : FFTool
{
    BOOL _isSelectingText;
}

+ (id)cursor;
+ (id)toolbarFacetImageOff;
+ (id)toolbarFacetImageOn;
+ (id)displayName;
+ (void)initialize;
@property BOOL isSelectingText; // @synthesize isSelectingText=_isSelectingText;
- (void)didMouseDownOnCanvas:(id)arg1 target:(id)arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)supportsMultipleSelection;
- (BOOL)editsItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)handlesItem:(id)arg1 target:(id)arg2 event:(id)arg3;
- (BOOL)itemHasText:(id)arg1;
- (BOOL)handlesSelection;
- (void)resignActiveTool;
- (id)init;

@end

