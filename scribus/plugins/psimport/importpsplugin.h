#ifndef IMPORTPSPLUGIN_H
#define IMPORTPSPLUGIN_H

#include "pluginapi.h"
#include "scplugin.h"

class PLUGIN_API ImportPSPlugin : public ScActionPlugin
{
	Q_OBJECT

	public:
		// Standard plugin implementation
		ImportPSPlugin();
		virtual ~ImportPSPlugin();
		virtual bool run(QString target = QString::null);
		virtual const QString fullTrName() const;
		virtual const AboutData* getAboutData() const;
		virtual void deleteAboutData(const AboutData* about) const;
		virtual void languageChange();

		// Special features (none)
};

extern "C" PLUGIN_API int importps_getPluginAPIVersion();
extern "C" PLUGIN_API ScPlugin* importps_getPlugin();
extern "C" PLUGIN_API void importps_freePlugin(ScPlugin* plugin);

#endif
