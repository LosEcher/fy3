inherit ROOM;

void create()
{
        set("short", "С����");
        set("long", @LONG
ϲȵ�����ͷ���ɹ������������������деĹ�ľ�ԡ���Ŀ������
�㷢���м�����׳�������������������ĺۼ��������������������
���������󴵹�����о������ޱȡ�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
        "west" : __DIR__"xiaoyucun.c",
]));
        set("objects", ([ /* sizeof() == 2 */
        __DIR__"npc/girl.c" : 1,
]));
    set("outdoors", "taohua");

        setup();
        replace_program(ROOM);
}

