//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@interface OZFolderGroupController : OZViewControllerGroup
{
    float _desiredLabelWidth;
    float _desiredParamWidth;
    BOOL _hasNoHeading;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 canDeferEnclosed:(BOOL)arg2 context:(id)arg3;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)initWithChan:(struct OZChannelBase *)arg1 andEnclosedGroup:(id)arg2 customLabel:(id)arg3 context:(id)arg4;
- (id)initWithChan:(struct OZChannelBase *)arg1 andEnclosedGroup:(id)arg2 context:(id)arg3;
- (id)initWithHeading:(id)arg1 andEnclosedGroup:(id)arg2 context:(id)arg3;
- (void)didBuildUI;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (void)getTargetChannels:(set_928275cf *)arg1;
- (void)twiddle;
- (void)didTwiddle:(BOOL)arg1;
- (void)setEnclosedGroup:(id)arg1 context:(id)arg2;

@end
