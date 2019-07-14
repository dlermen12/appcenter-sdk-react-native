module.exports = {
  dependency: {
    platforms: {
      ios: {},
      android: {
        packageInstance: 'new AppCenterReactNativeCrashesPackage(getApplication(), "ASK_JAVASCRIPT")'
      }
    }
  }
};
