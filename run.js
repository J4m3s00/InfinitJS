var testlib = require('./build/Release/testlib');

testlib.addThousandToNumber(20, function(err, res) {
if (err) {
    console.error(err);
} else {
    console.log('Result number was %d', res);
}
});