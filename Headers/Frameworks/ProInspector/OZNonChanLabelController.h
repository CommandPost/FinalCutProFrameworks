//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewController.h>

@class OZLabelText;

@interface OZNonChanLabelController : OZViewController
{
    OZLabelText *_pLabelText;
    float _currIndentAmount;
}

- (id)initWithName:(id)arg1 context:(id)arg2;
- (void)didBuildUI;
- (void)enable;
- (void)disable;
- (void)setLabelText:(id)arg1;
- (void)setLabelText:(id)arg1 andAlignment:(unsigned long long)arg2;
- (void)setFormatter:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (float)suggestedMinLabelWidth;
- (void)toggleDisclosure:(id)arg1;

@end
