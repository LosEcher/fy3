inherit ROOM;
void create()
{
        set("short", "�뷿");
        set("long", @LONG
    �������С��Ĺ뷿��һ���������������һ����齷���ǽ�ǣ�����ϸɴ��
����ǽ���Ϲ��˺�Щ������
LONG
        );

        set("exits", ([
                "south" : __DIR__"huayuan",
                ]));

        setup();
        replace_program(ROOM);
}
