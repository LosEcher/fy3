//make by temp
//ROOM: xuedi1.c


inherit ROOM;

void create()
{
        set("short", "ѩ��");
        set("long",@LONG
����һƬ��ѩ���ǵ�ƽ�أ���������ѩ���ĺ����֪������ȥ��
�ܴﵽ������ģ�����������һ����ܷ����ġ�
LONG
        );
        set("exits", ([
                "southwest" : __DIR__"xuesf",
                "southdown" : __DIR__"xuedi2",
                "westdown" : __DIR__"miling4"
        ]));
        setup();
        replace_program(ROOM);
}
