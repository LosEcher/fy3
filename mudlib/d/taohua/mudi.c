#include <ansi.h>
inherit ROOM;

void create()
{
    set("short", "Ĺ��");
        set("long", @LONG
    �������һ����������˵�Ĺ�ء�Ĺ����Χ����һЩ�����Ļ�����
���ϵİ׻����ǵ�㡣�׻��м���һ�ߴ��ʯ��(bei)�����������ȼ��
��ʯ�š�����Ĺ�ظɸɾ�������Ȼ�������˴�ɨ��
LONG
        );
        set("exits", ([
        "south" : "/d/taohua/road3",
        ]));
        set("item_desc", ([
        "bei": "������ţ��һ���Ů����������֮Ĺ��\n"
        ]) );

        setup();
}


