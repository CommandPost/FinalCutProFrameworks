//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "TLKPartInfo.h"

@class NSString;

@interface TLKPrecisionEditorAudioSplitLayer : CALayer <TLKPartInfo>
{
    int _edgeType;
    unsigned int _modifiedAudio:1;
}

- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
@property(nonatomic) int edgeType;
@property(nonatomic) BOOL modifiedAudio;
- (void)_updateLayers;
- (void)setDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

