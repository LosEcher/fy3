inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
���ǹ���ׯ�������������޽������Զ������������Ϊ�¾ɣ�
����ɨ��ʮ�ָɾ�������Ҳ��Ϊ���㣬��ȫû�г����լ������֮
�����ıڹ���һЩ�����黭��Ʒ����Ϊ�ϳ�֮�����Ե������۹ⲻ
�������д������֡�
LONG );

        set("exits", ([
                "north" : __DIR__"huating",
                "south" : __DIR__"qianyuan",
                "east"  : __DIR__"shufang",
        ]));

        setup();
        replace_program(ROOM);
}

