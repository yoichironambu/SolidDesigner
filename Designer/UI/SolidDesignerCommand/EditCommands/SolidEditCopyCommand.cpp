#include "SolidEditCopyCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidEditCopyCommand::SolidEditCopyCommand() noexcept
	: AppCommandBase(std::string(Cmd::EDIT_COPY))
{

}

sdr::SolidEditCopyCommand::~SolidEditCopyCommand()
{

}

bool SolidEditCopyCommand::IsSupported() const
{
	return false;
}

bool SolidEditCopyCommand::IsVisible() const
{
	return false;
}

bool SolidEditCopyCommand::IsEnabled() const
{
	return false;
}

std::string SolidEditCopyCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidEditCopyCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}