//make by temp
//ROOM: wumingfd.c

inherit ROOM;

void create()
{
        set("short", "�����嶥");
        set("long",@LONG
����Ƿ嶥�ˣ���վ����ң�����ܣ������Ⱥɽ��������£���
������Ψ�Ҷ���ĸо����㲻�����쳤Ц��
LONG
        );
        set("exits", ([
                "southdown" : __DIR__"xuesongl4",
        ]));
        setup();
        replace_program(ROOM);
}
