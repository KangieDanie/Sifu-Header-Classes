#include "MoviePipelineFCPXMLExporter.h"

UMoviePipelineFCPXMLExporter::UMoviePipelineFCPXMLExporter() {
    this->FileNameFormat = TEXT("{sequence_name}");
    this->DataSource = FCPXMLExportDataSource::OutputMetadata;
}

