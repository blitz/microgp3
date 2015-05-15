// Inherited class; the Ui_ugpMainWindow might be changed by
// Qt Designer, so the relevant bindings must operate here

#ifndef CONSTRAINTSEDITORWINDOW 
#define CONSTRAINTSEDITORWINDOW

#include "ui_ugp3-constraints.h"


// forward declaration
class XmlHighlighter;

namespace Ui 
{

// everything in the Ui_ConstraintsEditor is public
// multiple inheritance requires QObject to be first
class ConstraintsEditorWindow : public QObject, public Ui_ConstraintsEditor
{

Q_OBJECT

private:
	// pointer to main window
	QMainWindow* mainWindow;

	// name of the constraints file
	QString constraintsFile;
	
	// highlighter
	XmlHighlighter* highlighter;

public:
	// general setup, followed by all functions that set up the respective tabs
	void setupUi(QMainWindow* ugp3mainWindow);

	// destructor
	~ConstraintsEditorWindow();
	
// slot that will be connected to signals generated by objects
public slots:
	// TAB Constraints
	// load constraints file
	void loadConstraintsFile();
	// save and preview constraints file
	void previewConstraintsFile();
	// save constraints file
	void saveConstraintsFile();
};

} // namespace Ui

#endif
