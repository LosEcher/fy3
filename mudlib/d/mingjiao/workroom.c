inherit ROOM;

void create()
{
        set("short", "������Ϣ��");
        set("long", @LONG
���������̵�����ӵĵط�����ǽ���ż��Ŵ󴲣������̵�����
ϯ����ͷ���Ŵ�������������غ��䣬������ȫ����ʵ���ڹ���
��������
LONG
        );
        set("sleep_room",1);

        set("exits", ([
                   "south" : __DIR__"tonglu1",
               
        ]));

        set("objects",([
//
        ]));
        setup();
        replace_program(ROOM);
}
