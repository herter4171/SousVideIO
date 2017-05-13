from BashOps import BashOps

class ReadRF(BashOps):
    execName = 'RFSniffer'
    def __init__(self):
        from ConstValues import rfPath
        super(ReadRF, self).__init__(rfPath)

    def listen(self):
        print self.runWorkDirCmd(ReadRF.execName)