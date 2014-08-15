/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import <UIKit/UIKit.h>

typedef enum {
    TGMessageImageViewOverlayStyleDefault = 0,
    TGMessageImageViewOverlayStyleAccent = 1
} TGMessageImageViewOverlayStyle;

@interface TGMessageImageViewOverlayView : UIView

- (void)setOverlayStyle:(TGMessageImageViewOverlayStyle)overlayStyle;
- (void)setBlurredBackgroundImage:(UIImage *)blurredBackgroundImage;
- (void)setImageBackgroundColor:(UIColor *)imageBackgroundColor;
- (void)setDownload;
- (void)setProgress:(float)progress animated:(bool)animated;
- (void)setProgress:(float)progress cancelEnabled:(bool)cancelEnabled animated:(bool)animated;
- (void)setPlay;

@end
