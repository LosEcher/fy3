//make by temp
//ROOM: xuedi2.c


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
                "northup" : __DIR__"xuedi1"
        ]));
        setup();
        replace_program(ROOM);
}
