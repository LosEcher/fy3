inherit ROOM;

void create()
{
        set("short", "�鷿");
        set("long", @LONG
    ����һ��ɸɾ������鷿������һ����̴ľ�������Ϸ��Ų����鼮��
��ǽ�ĵط�����һ����ܣ�����������ȫ�Ǹ��ַ�װ���顣���в����鿴��ȥ
���ⰻȻ����Ȼ����Ѿá�
LONG
        );
    set("exits", ([
    "down" : __DIR__"daojufang",
]));
     set("objects", ([
        __DIR__"npc/yapu" : 2,
    ]) );    

        setup();
        replace_program(ROOM);
}

