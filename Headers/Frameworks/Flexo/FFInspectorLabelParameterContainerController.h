//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorContainerController.h>

@class FFInspectorLabelParameterContext, _FFInspectorLabelParameterDrawingContext;

__attribute__((visibility("hidden")))
@interface FFInspectorLabelParameterContainerController : FFInspectorContainerController
{
    FFInspectorLabelParameterContext *_context;
    _FFInspectorLabelParameterDrawingContext *_drawingContext;
}

+ (Class)classForHeaderController;
@property(readonly, nonatomic) FFInspectorLabelParameterContext *context; // @synthesize context=_context;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (void)reloadAllItems;
- (void)reloadItemsWithRange:(struct _NSRange)arg1;
- (void)reloadItemAtRow:(unsigned long long)arg1;
- (void)reloadItem:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)init;

@end

