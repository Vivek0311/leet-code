select *, 
(upper(dna_sequence) like 'ATG%') as has_start,
(upper(dna_sequence) like '%TAA' or upper(dna_sequence) like '%TAG' or upper(dna_sequence) like '%TGA') as has_stop, 
(upper(dna_sequence) like '%ATAT%') as has_atat,
(upper(dna_sequence) like '%GGG%') as has_ggg
from Samples
order by sample_id;
