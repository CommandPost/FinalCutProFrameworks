//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol OZPresetControllerIF

@optional
- (void)setPreset:(const struct OZLibraryPresetsMapDatum *)arg1;
- (void)loadPreset:(struct OZPasteList *)arg1 sender:(id)arg2;
- (void)loadPreset:(struct OZPasteList *)arg1;
- (BOOL)shouldApplyPresetOnNextRunLoop;
@end

