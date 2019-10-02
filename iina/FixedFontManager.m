#import "FixedFontManager.h"

@implementation FixedFontManager
NS_ASSUME_NONNULL_BEGIN

+ (nullable NSArray *)typefacesForFontFamily:(nonnull NSString *)family {
  NSFontManager *fontManager = [self sharedFontManager];
  return [fontManager availableMembersOfFontFamily:family];
}

NS_ASSUME_NONNULL_END
@end
